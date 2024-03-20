#include <iostream>
#include "Movies.h"
#include "Movie.h"
#include "User.h"
#include "Ticket.h"
#include "Booking.h"
#include "Payment.h"

int main() {
    // Create Movies
    Movie movie1("Movie 1", "2024-03-20", "15:00", 10.99, 100);
    Movie movie2("Movie 2", "2024-03-21", "18:30", 9.99, 80);
    Movie movie3("Movie 3", "2024-03-22", "21:00", 12.50, 120);

    // Create Movies Collection
    Movies moviesCollection;
    moviesCollection.addMovie(movie1);
    moviesCollection.addMovie(movie2);
    moviesCollection.addMovie(movie3);

    // Display Available Movies
    moviesCollection.displayMovies();

    // Search for a Movie
    std::string movieTitle = "Movie 1";
    Movie& selectedMovie = moviesCollection.searchMovie(movieTitle);
    std::cout << "\nSelected Movie: " << selectedMovie.getTitle() << std::endl;

    // Get Available Seats for the Selected Movie
    int availableSeats = moviesCollection.getAvailableSeats(movieTitle);
    std::cout << "Available Seats: " << availableSeats << std::endl;

    // Create User
    User user("John Doe", "johndoe@example.com");
    std::cout << "\nUser Details - Name: " << user.getName() << " | Email: " << user.getEmail() << std::endl;

    // Book Tickets
    std::string seat1 = "A1";
    Ticket ticket1(selectedMovie, user, seat1);
    std::string seat2 = "B2";
    Ticket ticket2(selectedMovie, user, seat2);

    // Create Booking
    Booking booking;
    booking.addTicket(ticket1);
    booking.addTicket(ticket2);

    // Display Booking Details
    std::cout << "\nBooking Details:" << std::endl;
    booking.displayBookingDetails();

    // Make Payment
    double totalAmount = ticket1.calculatePrice() + ticket2.calculatePrice(); // Corrected
    std::string paymentMethod = "Credit Card";
    booking.makePayment(totalAmount, paymentMethod);

    return 0;
}
