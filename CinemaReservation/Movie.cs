public class Movie
{
    public string Title { get; set; }
    public int DurationMinutes { get; set; }
    public List<Showtime> Showtimes { get; set; }

    public Movie(string title, int durationMinutes)
    {
        Title = title;
        DurationMinutes = durationMinutes;
        Showtimes = new List<Showtime>();
    }

    public void AddShowtime(Showtime showtime)
    {
        Showtimes.Add(showtime);
    }
}
