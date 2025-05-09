public class Cinema
{
    public List<Movie> Movies { get; set; } = new();

    public void ListMovies()
    {
        // TODO: покажи списък с филми и прожекции
    }

    public Movie? FindMovieByTitle(string title)
    {
        // TODO: върни филм по заглавие (case insensitive)
        return null;
    }

    public bool TryBook(string movieTitle, DateTime startTime, int seats)
    {
        // TODO: намери филма и прожекцията, опитай резервация
        return false;
    }
}
