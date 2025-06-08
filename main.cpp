// library
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <math.h>

// namespace
using namespace std;

// variable set
typedef long long int li;
typedef string str;
typedef vector<li> vli;

// function name;
POINT p;
void ClickMouse(bool left_flag);

// main function
void main()
{
    // main program
    int n;
    cin >> n;

    // play
    ClickMouse(1);
}

// function
void ClickMouse(bool left_flag)
{
    if (GetCursorPos(&p))
    {
        int x_pos = p.x;
        int y_pos = p.y;
        ::mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, x_pos, y_pos,
                      0, ::GetMessageExtraInfo());

        if (left_flag)
        {
            ::mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_ABSOLUTE,
                          x_pos, y_pos, 0, ::GetMessageExtraInfo());
            ::mouse_event(MOUSEEVENTF_LEFTUP | MOUSEEVENTF_ABSOLUTE,
                          x_pos, y_pos, 0, ::GetMessageExtraInfo());
        }
        else
        {
            ::mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_ABSOLUTE,
                          x_pos, y_pos, 0, ::GetMessageExtraInfo());
            ::mouse_event(MOUSEEVENTF_RIGHTUP | MOUSEEVENTF_ABSOLUTE,
                          x_pos, y_pos, 0, ::GetMessageExtraInfo());
        }
    }
}
