public class Movie
{
    public string Title { get; set; }
    public int DurationMinutes { get; set; }
    public List<Showtime> Showtimes { get; set; }

    public Movie(string title, int durationMinutes)
    {
        // TODO: инициализирай
    }

    public void AddShowtime(Showtime showtime)
    {
        // TODO: добави прожекция
    }
}
