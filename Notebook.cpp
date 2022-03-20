#include <string>
#include "Direction.hpp"
#include <iostream>

#include "Notebook.hpp"
namespace ariel {
    
            void Notebook::write(int page, int row, int col, Direction dir, std::string text) {
                // add implementation
                std::cout << "test\n";
            }
            std::string Notebook::read(int page, int row, int col, Direction dir, int len) {
                // add implementation
                return "test returned";
            }
            void Notebook::erase(int page, int row, int col, Direction dir, int len) {
// add implementation
            }
            void Notebook::show(int page) {
// add implementation
            }
    
}