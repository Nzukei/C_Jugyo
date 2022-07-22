using System;

class DoMoreWithStrings
{
    static void Main()
    {
        string greeting = "      Hello World!       ";
        Console.WriteLine($"[{greeting}]");
        /* 문자열에서 선행 또는 후행 공백이 있음 */
        string trimmedGreeting = greeting.TrimStart();
        Console.WriteLine($"[{trimmedGreeting}]");
        /* 문자열에서 선행 공백을 잘라냄 */
        trimmedGreeting = greeting.TrimEnd();
        Console.WriteLine($"[{trimmedGreeting}]");
        /* 문자열에서 후행 공백을 잘라냄 */
        trimmedGreeting = trimmedGreeting.Trim();
        Console.WriteLine($"[{trimmedGreeting}]");
        /* 문자열에서 양옆 공백을 잘라냄 */
    }
}
