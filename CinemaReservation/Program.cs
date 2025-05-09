//🟩 Задача: Система за резервации в кино
//🎯 Описание:

//Напиши конзолно приложение, което симулира проста система за кино резервации.
//📦 Функционалности:

//    Имаш клас Movie, който съдържа:

//        string Title

//        int DurationMinutes

//        List<Showtime> Showtimes

//    Клас Showtime съдържа:

//        DateTime StartTime

//        int Capacity (брой места)

//        int BookedSeats (брой заети места)

//        Метод bool BookSeats(int numberOfSeats)

//            ако има достатъчно места – връща true и увеличава BookedSeats

//            иначе – връща false

//    Клас Cinema съдържа:

//        List<Movie> Movies

//        Метод void ListMovies()

//        Метод Movie? FindMovieByTitle(string title)

//        Метод bool TryBook(string movieTitle, DateTime startTime, int seats)

class Program
{
    static void Main()
    {
        // TODO: създай инстанция на Cinema, добави филми и прожекции

        // Примерна симулация:
        // - Покажи всички филми
        // - Прочети заглавие, дата и брой места от потребителя
        // - Извикай TryBook() и покажи резултат
    }
}
