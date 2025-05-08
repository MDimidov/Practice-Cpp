char[] chars = Console.ReadLine()!
    .ToArray();

Console.WriteLine(IsBracketsValid(chars));

bool IsBracketsValid(char[] chars)
{
    Dictionary<char, char> openClosedBrackets = new()
    {
        {'(', ')' },
        {'{', '}' },
        {'[', ']' },
        {'<', '>' },
    };

    Stack<char> brackets = new();
    for (int i = chars.Length - 1; i >= 0; i--)
    {
        if (openClosedBrackets.ContainsKey(chars[i]))
        {
            if (brackets.Any() && brackets.Peek() == openClosedBrackets[chars[i]])
            {
                brackets.Pop();
            }
            else
            {
                brackets.Push(chars[i]);
            }
        }
        else
        {
            brackets.Push(chars[i]);
        }
    }

    return !brackets.Any();
}