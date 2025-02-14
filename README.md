# Simple Calculator

এই প্রজেক্টটি একটি সি প্রোগ্রাম যা দুটি সংখ্যা নিয়ে বিভিন্ন গাণিতিক অপারেশন করে। এটি যোগ, বিয়োগ, গুণ এবং ভাগ করার ক্ষমতা রাখে। ব্যবহারকারীরা দুটি সংখ্যা ইনপুট দেওয়ার মাধ্যমে ফলাফল দেখতে পাবেন।

## ফিচারসমূহ:
- যোগ, বিয়োগ, গুণ এবং ভাগ
- শূন্য দিয়ে ভাগের ক্ষেত্রে সতর্কতা

## প্রজেক্ট রান করার পদ্ধতি:
1. কোডটি ডাউনলোড বা ক্লোন করুন:
    
    git clone https://github.com/GalibDev/Simple-calculator.git
    

2. কোড কম্পাইল করুন:
    - Windows: Code::Blocks ব্যবহার করুন।
    - Linux/Mac: gcc simple_calculator.c -o calculator কমান্ড দিয়ে কোড কম্পাইল করুন।

3. প্রোগ্রামটি চালানোর জন্য:
    - Windows: কোড::ব্লকস এ রান করুন।
    - Linux/Mac: ./calculator কমান্ড দিয়ে রান করুন।

## কন্ট্রিবিউশন:
আপনি যদি এই প্রজেক্টে কন্ট্রিবিউট করতে চান, তাহলে অনুগ্রহ করে একটি পুল রিকোয়েস্ট পাঠান।


#include <stdio.h>

int main() {
    int num1, num2;
    int sum, subtract, multiply;
    float divide;

    // প্রথম ইনপুট নেওয়া
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // দ্বিতীয় ইনপুট নেওয়া
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // শূন্য দিয়ে ভাগ চেক করা
    if (num2 == 0) {
        printf("Division not possible (cannot divide by zero)!\n");
        return 0;
    }

    // গাণিতিক অপারেশন
    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = (float) num1 / num2;

    // ফলাফল দেখানো
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtract);
    printf("Multiplication: %d\n", multiply);
    printf("Division: %.2f\n", divide);

    return 0;
}

