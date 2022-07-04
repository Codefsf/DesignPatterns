#include <QApplication>
#include <QTimer>

#include "state/context.h"
#include "state/statea.h"
#include "state/stateb.h"

#include <memory>
#include <vector>
#include <iostream>
#include <map>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::map<int, std::string> mp;
    for(int i = 0; i < 10; i++)
    {
        mp.insert(std::pair<int, std::string>(i, std::to_string(i)));
    }

    for(auto itr = mp.begin(); itr != mp.end();)
    {
        if((*itr).first == 5)
        {
            itr = mp.erase(itr);
        }
        else
        {
            itr++;
        }
    }

    for(auto& index : mp)
    {
        std::cout << index.first << index.second << std::endl;
    }
    return a.exec();
}
