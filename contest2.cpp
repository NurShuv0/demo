#include <iostream>
#include <string>

using namespace std;

void calculateBowlingFigures(string matchData) {
    int overs = 0;
    int balls = 0;
    int runs = 0;
    int wickets = 0;

    for (char ball : matchData) {
        if (ball == 'W') {
            wickets++;
        } else {
            runs += ball - '0';
            balls++;
        }

        if (balls == 6) {
            overs++;
            balls = 0;
        }
    }

    // Output formatting
    if(overs==0 || overs==1)
    {
        cout<< overs << "." << balls << " Over";
    }
    if(overs >1)
        {
         cout << overs << "." << balls << " Overs";
    }
    if(runs == 0 || runs == 1)
    {
         cout << runs << "Run";
    }
    if(runs >1)
    {
         cout << runs << " Runs";
    }
    if(wickets == 0 || wickets ==1)
    {
        cout<< wickets << " Wicket";
    }
   if(wickets >0)
   {
           cout << wickets << " Wickets." << endl;
   }

}

int main() {
    int T; // Number of test cases
    cin >> T;

    for (int t = 0; t < T; t++) {
        string matchData;
        cin >> matchData;
        calculateBowlingFigures(matchData);
    }

    return 0;
}
