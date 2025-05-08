char[] splitters = new[] { ' ', '.', ',', '!', '?', '\"' };

string[] wordsToCheck = Console.ReadLine()!
    .Split(splitters, StringSplitOptions.RemoveEmptyEntries)
    .Select(s => s.ToLower())
    .ToArray();

string[] stopWords = Console.ReadLine()!
    .Split(splitters, StringSplitOptions.RemoveEmptyEntries)
    .Select(s => s.ToLower())
    .ToArray();


Dictionary<string, int> result = new();

foreach (string word in wordsToCheck)
{

    if (!stopWords.Contains(word))
    {
        if (!result.ContainsKey(word))
        {
            result[word] = 0;
        }

        result[word]++;
    }
}

result = result
    .OrderByDescending(w => w.Value)
    .ToDictionary();

foreach (var keyValuePair in result)
{
    Console.WriteLine(keyValuePair.Key);
    break;
}