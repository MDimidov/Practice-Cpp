public class Showtime
{
    public DateTime StartTime { get; set; }
    public int Capacity { get; set; }
    public int BookedSeats { get; private set; }

    public Showtime(DateTime startTime, int capacity)
    {
        // TODO: инициализирай
    }

    public bool BookSeats(int numberOfSeats)
    {
        // TODO: върни true ако има място и увеличи BookedSeats
        return false;
    }

    public int AvailableSeats => Capacity - BookedSeats;
}
