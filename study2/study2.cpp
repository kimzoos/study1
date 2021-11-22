// study2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    for (vector<string>::iterator it = phone_book.begin(); it + 1 != phone_book.end(); it++)
    {
        if ((it + 1)->find(*it) == 0)
        {
            answer = false;
            break;
        }
    }

    return answer;
}

int main()
{
    vector<string> phone_book;

    phone_book.push_back("119");
    phone_book.push_back("97674223");
    phone_book.push_back("1195524421");

    solution(phone_book);
}
