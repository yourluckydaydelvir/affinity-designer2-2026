{\rtf1\ansi\ansicpg1251\cocoartf2870
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <vector>\
\
std::vector<int> fibonacci(int n) \{\
    std::vector<int> sequence;\
    int a = 0;\
    int b = 1;\
\
    for (int i = 0; i < n; ++i) \{\
        sequence.push_back(a);\
        int next = a + b;\
        a = b;\
        b = next;\
    \}\
\
    return sequence;\
\}\
\
int main() \{\
    int count;\
\
    std::cout << "How many Fibonacci numbers do you want? ";\
    if (!(std::cin >> count) || count <= 0) \{\
        std::cout << "Please enter a positive integer.\\n";\
        return 1;\
    \}\
\
    std::vector<int> result = fibonacci(count);\
\
    std::cout << "First " << count << " Fibonacci numbers: ";\
    for (std::size_t i = 0; i < result.size(); ++i) \{\
        if (i > 0) \{\
            std::cout << ", ";\
        \}\
        std::cout << result[i];\
    \}\
    std::cout << '\\n';\
\
    return 0;\
\}}