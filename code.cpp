#include <iostream>
#include <vector>

using namespace std;

int last_channel(int n, int k)
{
    vector<int> channels(n);
    for (int i = 0; i < n; i++)
    {
        channels[i] = i + 1;
    }
    int current_channel = 0;
    while (channels.size() > 1)
    {
        current_channel = (current_channel + k - 1) % channels.size();
        channels.erase(channels.begin() + current_channel);
    }
    return channels[0];
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << last_channel(n, k) << endl;
    return 0;
}
