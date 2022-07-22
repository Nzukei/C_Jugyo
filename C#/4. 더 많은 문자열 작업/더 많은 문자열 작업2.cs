using System;

class DoMoreWithStrings
{
    static void Main()
    {
        string sayHello = "Hello World!";
        Console.WriteLine(sayHello);
        sayHello = sayHello.Replace("Hello", "Greeting");
        Console.WriteLine(sayHello);
    }
}
