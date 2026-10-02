#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

vector<int> nextSmallestElement(vector<int> &heights, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> answer(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int current = heights[i];
        while (s.top() != -1 && heights[s.top()] >= current)
        {
            s.pop();
        }
        answer[i] = s.top();
        s.push(i);
    }

    return answer;
}

vector<int> previousSmallestElement(vector<int> &heights, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> answer(n);

    for (int i = 0; i < n; i++)
    {
        int current = heights[i];
        while (s.top() != -1 && heights[s.top()] >= current)
        {
            s.pop();
        }
        answer[i] = s.top();
        s.push(i);
    }

    return answer;
}

int rectangularArea(vector<int> &heights)
{
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallestElement(heights, n);

    vector<int> prev(n);
    prev = previousSmallestElement(heights, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }

        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }

    return area;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> heights(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> heights[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << heights[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    int answer = rectangularArea(heights);

    cout << "The largest rectangular area in histogram is : " << answer << endl;

    return 0;
}