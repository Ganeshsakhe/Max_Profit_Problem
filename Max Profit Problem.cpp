#include <iostream>

using namespace std;
int solution(int time) {

    if (time >= 5) {
        return max(1500 * (time - 5) + solution(time - 5), 1000 * (time - 4) + solution(time - 4));
    }
    return 0;

}
int main()
{
    int time;
    cin >> time;
    cout << solution(time);

    return 0;
}
