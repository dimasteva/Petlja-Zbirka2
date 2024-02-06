/*
Task: Circular Route
On a circular route, there are n gas stations. For each station, the number of liters of gasoline that can be bought and the distance to the next station are known. We assume that the car's fuel tank capacity is unlimited and that 1 liter of gasoline is required for 1 unit of distance. Write a program to determine the ordinal number of the first station from where it is possible to travel the entire circle (if possible). At the beginning of the journey, the car's tank is empty and is filled at the initial station.

Input: The first line of the standard input contains the number of stations n (2 ≤ n ≤ 105). In the next n lines, the distance to the next station and the amount of fuel that can be bought for each station are given (integer numbers between 1 and 1000, separated by a space).

Output: Display in a single line on the standard output the ordinal number of the first station from which the circle can be completed (stations are numbered from 0), or -1 if a circular route is not possible.

Example:
Input
5
3 4
3 2
3 2
4 7
3 2
Output
3
*/
#include <iostream>
#include <vector>
using namespace std;

struct Station {
    int gasoline, distance;
};

int find(vector<Station> stations, int n) {
    int start = 0, destination = 1;
    int distance = stations[start].distance;
    int gasoline = stations[start].gasoline;

    while (true) {
        if (distance <= gasoline) {
            distance += stations[destination].distance;
            gasoline += stations[destination].gasoline;
            destination = (destination + 1) % n;

            if (destination == start && distance <= gasoline)
                return start;
        } else {
            distance -= stations[start].distance;
            gasoline -= stations[start].gasoline;
            start = start + 1;

            if (start == n)
                return -1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<Station> stations(n);

    for (int i = 0; i < n; i++)
        cin >> stations[i].distance >> stations[i].gasoline;

    cout << find(stations, n) << endl;
    return 0;
}
