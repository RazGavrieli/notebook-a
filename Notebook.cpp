#include <string>
#include "Direction.hpp"
#include <iostream>

#include "Notebook.hpp"
namespace ariel {
    
            Notebook::Notebook()
            {
                // declare DEFEINED amount of pages 

            }
    
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

    Page::Page() {
        // declare array of strings (DEFINED amount of rows)
        // length of each string is 100. 
        // each string is initialized with "_" in each char.
    } 