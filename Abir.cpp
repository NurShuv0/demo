#include <iostream>
#include <string>

using namespace std;

struct Tree
{
    string name;
    double seedPrice;
    string season;
    string category;
};

int main()
{
    const int numTrees = 50;
    Tree trees[numTrees];

    trees[0] = {"Mango", 50.0, "Monsoon (June to August)", "Fruit Plant"};
    trees[1] = {"Banana", 10.0, "Year-round (Best in rainy season)", "Fruit Plant"};
    trees[2] = {"Papaya", 5.0, "Rainy Season", "Fruit Plant"};
    trees[3] = {"Guava", 10.0, "Monsoon Season", "Fruit Plant"};
    trees[4] = {"Jackfruit", 20.0, "Rainy Season", "Fruit Plant"};
    trees[5] = {"Litchi", 50.0, "Winter (November to February)", "Fruit Plant"};
    trees[6] = {"Pineapple", 20.0, "Rainy Season", "Fruit Plant"};
    trees[7] = {"Lemon", 10.0, "Monsoon Season", "Fruit Plant"};
    trees[8] = {"Pomegranate", 30.0, "Rainy Season", "Fruit Plant"};
    trees[9] = {"Sapodilla", 20.0, "Monsoon Season", "Fruit Plant"};
    trees[10] = {"Olive", 100.0, "Rainy Season", "Fruit Plant"};
    trees[11] = {"Custard-Apple", 10.0, "Rainy Season", "Fruit Plant"};
    trees[12] = {"Coconut", 30.0, "Monsoon Season", "Fruit Plant"};
    trees[13] = {"Starfruit", 10.0, "Rainy Season", "Fruit Plant"};
    trees[14] = {"Olive", 100.0, "Rainy Season", "Fruit Plant"};
    trees[15] = {"Cashew", 30.0, "Monsoon Season", "Fruit Plant"};
    trees[16] = {"Krishnachura", 20.0, "Spring (March to April)", "Flower Plant"};
    trees[17] = {"Sheuli", 10.0, "Year-round", "Flower Plant"};
    trees[18] = {"Radhachura", 15.0, "Spring (February to April)", "Flower Plant"};
    trees[19] = {"Kanchan", 20.0, "Spring (March to April)", "Flower Plant"};
    trees[20] = {"Jarul", 10.0, "Spring (March to April)", "Flower Plant"};
    trees[21] = {"Kadam", 10.0, "Spring (March to April)", "Flower Plant"};
    trees[22] = {"Shimul", 15.0, "Spring (March to April)", "Flower Plant"};
    trees[23] = {"Palash", 10.0, "Spring (March to April)", "Flower Plant"};
    trees[24] = {"Guloncho", 10.0, "Year-round", "Flower Plant"};
    trees[25] = {"Bokul", 10.0, "Year-round", "Flower Plant"};
    trees[26] = {"Ratnagiri", 10.0, "Spring (March to April)", "Flower Plant"};
    trees[27] = {"Sada-Chapa", 20.0, "Spring (March to April)", "Flower Plant"};
    trees[28] = {"Chandni", 20.0, "Spring (March to April)", "Flower Plant"};
    trees[29] = {"Akondo", 10.0, "Year-round", "Flower Plant"};
    trees[30] = {"Champa", 10.0, "Year-round", "Flower Plant"};
    trees[31] = {"Kodom", 10.0, "Spring (March to April)", "Flower Plant"};
    trees[32] = {"Madhabilata", 20.0, "Spring (March to April)", "Flower Plant"};
    trees[33] = {"Brinjal", 20.0, "Late winter to early spring (December to February)", "Vegetable Plant"};
    trees[34] = {"Tomato", 30.0, "Late winter to early spring (December to February)", "Vegetable Plant"};
    trees[35] = {"Cauliflower", 70.0, "Late summer to early autumn (July to September)", "Vegetable Plant"};
    trees[36] = {"Cabbage", 70.0, "Late summer to early autumn (July to September)", "Vegetable Plant"};
    trees[37] = {"Carrot", 40.0, "Late summer to early autumn (July to September)", "Vegetable Plant"};
    trees[38] = {"Radish", 30.0, "Late summer to early autumn (July to September)", "Vegetable Plant"};
    trees[39] = {"Spinach", 25.0, "Late winter to early spring (December to February)", "Vegetable Plant"};
    trees[40] = {"Okra", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[41] = {"Bitter Gourd", 25.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[42] = {"Snake Gourd", 25.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[43] = {"Bean ", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[44] = {"Pumpkin", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[45] = {"Cucumber", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"};
    trees[46] = {"Bell-Pepper", 40.0, "Late winter to early spring (December to February)", "Vegetable Plant"};
    trees[47] = {"Chili-Pepper", 25.0, "Late winter to early spring (December to February)", "Vegetable Plant"};
    trees[48] = {"Lentil", 40.0, "Late autumn to early winter (October to November)", "Vegetable Plant"};
    trees[49] = {"Spinach", 25.0, "Late summer to early autumn (July to September)", "Vegetable Plant"};

    int category;
    cout << "Enter Your Choice(1 for Flower Plant, 2 for Fruit Plant, 3 for Vegetable Plant): ";
    cin >> category;

    cout << "Plants of the selected category" << nl;
    switch (category)
    {
    case 1:
        for (int i = 0; i < numTrees; ++i)
        {
            if (trees[i].category == "Flower Plant")
            {
                cout << "Name: " << trees[i].name << nl;
            }
        }
        break;
    case 2:
        for (int i = 0; i < numTrees; ++i)
        {
            if (trees[i].category == "Fruit Plant")
            {
                cout << "Name: " << trees[i].name << nl;
            }
        }
        break;
    case 3:
        for (int i = 0; i < numTrees; ++i)
        {
            if (trees[i].category == "Vegetable Plant")
            {
                cout << "Name: " << trees[i].name << nl;
            }
        }
        break;
    default:
        cout << "Invalid category selected." << nl;
        return 0;
    }

    string userTreeName;
    cout << "Enter the name of the tree from the selected category: ";
    cin >> userTreeName;

    for (int i = 0; i < numTrees; ++i)
    {
        if (trees[i].name == userTreeName)
        {
            cout << "Category: " << trees[i].category << nl;
            cout << "Seed Price: " << trees[i].seedPrice << " BDT" << nl;
            cout << "Season: " << trees[i].season << nl;
            return 0;
        }
    }

    cout << "Tree not found in the selected category." << nl;

    return 0;
}



