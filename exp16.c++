#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Job {
    int start, finish, profit;
};

bool JobComparator(Job s1, Job s2) {
    return (s1.finish < s2.finish);
}

int latestNonConflict(Job arr[], int i) {
    int j;
    for (j = i - 1; j >= 0; j--) {
        if (arr[j].finish <= arr[i].start)
            return j;
    }
    return -1;
}

int findMaxProfit(Job arr[], int n) {
    int i;
    sort(arr, arr + n, JobComparator);
    int* table = new int[n];
    table[0] = arr[0].profit;
    for (i = 1; i < n; i++) {
        int Prof = arr[i].profit;
        int l = latestNonConflict(arr, i);
        if (l != -1)
            Prof += table[l];
        table[i] = max(Prof, table[i - 1]);
    }
    int result = table[n - 1];

    delete[] table;
    return result;
}

int main() {
    Job arr[] = { {3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200} };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> selectedJobs;
    int optimalProfit = findMaxProfit(arr, n);
    cout << "\nThe optimal profit is: " << optimalProfit;

    return 0;
}

