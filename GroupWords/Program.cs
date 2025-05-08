
string[] strings = Console.ReadLine()!
    .Split(new char[] { ',', ' ', '\"' }, StringSplitOptions.RemoveEmptyEntries)
    .ToArray();

Dictionary<int, List<string>> result = GetFilledDictionary(strings);

PrintSortedDictionary(result);


Dictionary<int, List<string>> GetFilledDictionary(string[] strings)
{
    Dictionary<int, List<string>> dictionary = new();

    int key = -1;
    foreach (string word in strings)
    {
        key = word.Length;

        if (!dictionary.ContainsKey(key))
        {
            dictionary[key] = new List<string>();
        }

        dictionary[key].Add(word);
    }

    return dictionary
        .OrderBy(x => x.Key)
        .ToDictionary();
}

void PrintSortedDictionary(Dictionary<int, List<string>> dictionary)
{
    foreach ((int key, List<string> words) in dictionary)
    {
        Console.Write($"{key}: [");
        Console.WriteLine(string.Join(", ", words) + "]");
    }
}