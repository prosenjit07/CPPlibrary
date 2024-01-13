#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Bowler
{
    int overs;
    int balls;
    int runs;
    int wickets;
};

Bowler calc(string balls)
{
    Bowler figures = {0, 0, 0, 0};

    for (char ball : balls)
    {
        if (ball == 'W')
        {
            figures.wickets++;
            figures.balls++;
        }
        else
        {
            figures.runs += ball - '0';
            figures.balls++;
        }
    }

    figures.overs = figures.balls / 6;
    figures.balls %= 6;

    return figures;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; ++i)
    {
        string balls;
        getline(cin, balls);
        Bowler figures = calc(balls);
        cout << figures.overs << "." << figures.balls << " Over" << (figures.overs >= 1 && figures.balls > 0 ? "s " : " ") << figures.runs << " Run" << (figures.runs > 1 ? "s" : "")  << " " << figures.wickets << " Wicket" << (figures.wickets > 1 ? "s" : "") << "." << endl;
    }

    return 0;
}
