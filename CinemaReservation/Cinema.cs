public class Cinema
{
    public List<Movie> Movies { get; set; } = new();

    public void ListMovies()
    {
        Console.WriteLine("> Списък с филми:");
        foreach (Movie movie in Movies)
        {
            Console.WriteLine($"- {movie.Title} ({movie.DurationMinutes} мин.)");
            foreach (Showtime show in movie.Showtimes)
            {
                Console.WriteLine($"\t- {show.StartTime.ToString("dd.MM.yyyy HH:mm")} (места: {show.Capacity}, заети: {show.BookedSeats})");
            }
        }
    }

    public Movie? FindMovieByTitle(string title)
        => Movies
        .FirstOrDefault(x => x.Title.ToLower() == title.ToLower());

    public bool TryBook(string movieTitle, DateTime startTime, int seats)
    {
        // TODO: намери филма и прожекцията, опитай резервация
        Movie? movie = FindMovieByTitle(movieTitle);
        if (movie == null)
        {
            Console.WriteLine($"Does not exist movie with title {movieTitle}");
            return false;
        }

        Showtime? show = movie.Showtimes.FirstOrDefault(s => s.StartTime == startTime);

        if (show == null)
        {
            Console.WriteLine($"Does not exist movie with given show time {startTime.ToString("dd.MM.yyyy HH:mm")}");
            return false;
        }

        Console.WriteLine("> Резервиране:");
        Console.WriteLine($"Movie: {movie.Title}");
        Console.WriteLine($"Time: {show.StartTime.ToString("dd.MM.yyyy HH:mm")}");
        Console.WriteLine($"Seats: {seats}");

        if (!show.BookSeats(seats))
        {
            return false;
        }

        return true;
    }
}
