// See https://aka.ms/new-console-template for more information
List<int> list = Console.ReadLine()!
    .Split(", ", StringSplitOptions.RemoveEmptyEntries)
    .Select(int.Parse)
    .ToList();


printList(removeNegativeAndSort(list));

List<int> removeNegativeAndSort(List<int> ints)
    => ints.Where(num => num >= 0)
    .OrderBy(num => num)
    .ToList();

void printList(List<int> ints)
{
    Console.WriteLine(string.Join(", ", ints));
}