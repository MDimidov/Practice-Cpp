char[] chars = Console.ReadLine()!
    .ToArray();

Console.WriteLine(IsBracketsValid(chars));

bool IsBracketsValid(char[] chars)
{
    Dictionary<char, char> openClosedBrackets = new()
    {
        {')', '(' },
        {'}', '{' },
        {']', '[' },
        {'>', '<' },
    };

    Stack<char> brackets = new();
    foreach (char c in chars)
    {
        if (openClosedBrackets.ContainsKey(c))
        {
            if (brackets.Any() && brackets.Peek() == openClosedBrackets[c])
            {
                brackets.Pop();
            }
            else
            {
                brackets.Push(c);
            }
        }
        else
        {
            brackets.Push(c);
        }
    }

    return !brackets.Any();
}