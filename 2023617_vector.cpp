#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    string name;

    cout << "이름을 입력하세요 (종료: q 혹은 Q)" << endl;
    for(int i =0; ; i++)
    {
        cout << ">> ";
        getline(cin, name);
        if(name == "q" || name == "Q")  {   break;  }
        v.push_back(name);
    }
    if(v.size() == 0)
    {   cout << "이름 목록이 생성되지 않았습니다. 종료합니다."; return 0;   }
    cout << v.size() << "개의 이름 목록이 생성되었습니다." << endl;

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)   cout << v[i] << endl;
}