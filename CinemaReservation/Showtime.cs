public class Showtime
{
    public DateTime StartTime { get; set; }
    public int Capacity { get; set; }
    public int BookedSeats { get; private set; }

    public Showtime(DateTime startTime, int capacity)
    {
        StartTime = startTime;
        Capacity = capacity;
    }

    public bool BookSeats(int numberOfSeats)
    {
        if (numberOfSeats + BookedSeats <= Capacity)
        {
            BookedSeats += numberOfSeats;
            return true;
        }

        Console.WriteLine("Няма достатъчно места!");
        return false;
    }

    public int AvailableSeats => Capacity - BookedSeats;
}
