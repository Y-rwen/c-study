#define   _CRT_SECURE_NO_WARNINGS

#include "Stack.h"

bool isValid(char* s) {
    ST st;
    StackInit(&st);
    while (*s != '\0')
    {
        switch (*s)
        {
        case'ги':
        case'{':
        case'[':
        {
            StackPush(&st, *s);
            ++s;
            break;
        }
        case')':
        case'}':
        case']':
        {
            if (StackEmpty(&st))
            {
                StackDestory(&st);
                return false;
            }

            char top = StackTop(&st);
            StackPop(&st);
            if ((*s == '}' && top != '{')
                || (*s == ')' && top != '(')
                || (*s == ']' && top != '['))
            {
                StackDestory(&st);
                return false;
            }
            else
            {
                ++s;
            }
            break;
        }
        default:
            break;
        }
    }
    bool ret = StackEmpty(&st);
    StackDestory(&st);
    return ret;
}