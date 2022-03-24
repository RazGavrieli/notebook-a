#include <string>
#include "Direction.hpp"
#include <iostream>
#include <vector>
#include "Notebook.hpp"

#define INIT_SIZE 5


class Page {
    std::vector<std::string> rows;
    const std::string emptyLine = "____________________________________________________________________________________________________";  
    const int lineSize = 100;
    void allocateRows(int r) {
        /**
         * @brief private function that allocates new rows for the page
         * 
         */
        for (int i = rows.size(); i<=r; i++) {
            rows.push_back(emptyLine);
        }
    }
    public:
        Page() {
            /**
            * @brief 
            * vector of strings has already been declared in the fields of the class. (objects initialization)
            * In this constructor we will declare defined amount of rows. Each row is a string with 100 empty characters.
            */ 

            for (int i = 0; i<INIT_SIZE; i++) {
                rows.push_back(emptyLine);
            }
        }
        int getsize() {
            /**
             * @brief getter for the amount of rows in the page 
             */

            return rows.size();
        }
        std::string getrow(int r) {
            /**
             * @brief getter for a specific row in the page (string type, length 100)
             * if the row is bigger than the amount of rows in the page, allocate new rows for it.
             */
            if (r>rows.size()) {
                allocateRows(r);
                return rows.at(r);
            }
            return rows.at(r);
        }
        std::string getcol(int c) {
            if (c<0 || c>100) {
                throw std::runtime_error("collums must be an int between 0-100!");
            }
            std::string col;
            for (int i = 0; i < rows.size(); i++)
            {
                col += getrow(i)[c];
            }
            return col;
            
        }
        void replaceline(int r, std::string newline) {
            if (newline.size()!=lineSize) {
                throw std::runtime_error("new line size has to be exactly 100!");
            }
            if (r>rows.size()) {
                allocateRows(r);
                rows[r] = newline;
            } else {
                rows[r] = newline;
            }
        }
};

namespace ariel {
    class Notebook {
            std::vector<Page> pages;
            const std::string emptyLine = "____________________________________________________________________________________________________";  
            const int lineSize = 100;
            public:
                Notebook()
                {
                for (int i = 0; i<INIT_SIZE; i++) {
                    Page newPage;
                    pages.push_back(newPage);
                }
                }
        
                void write(int page, int row, int col, Direction dir, std::string text) {


                    if (page>pages.size()) {
                        // allocate new pages
                    } 

                    if (dir==Direction::Horizontal) {
                        if (lineSize-col<text.size()) {
                            throw std::runtime_error("text is out of bounds!");
                        }
                        std::string oldLine = pages.at(page).getrow(row);
                        std::string newLine = emptyLine;
                        int j = 0;
                        for (int i = 0; i<lineSize; i++) {
                            if (i>=col&&i<col+text.size()) {
                                if (oldLine[i]=='_') {
                                    newLine[i]=text[j];
                                    j++;
                                } else {
                                    throw std::runtime_error("text is overlapping!");
                                }
                            } else {
                                newLine[i]=oldLine[i];
                            }
                        }
                        pages.at(page).replaceline(row, newLine);
                        std::cout << newLine;
                    } else {
                        // DIRECTION IS VERTICAL!
                    }
                    
                }
                std::string read(int page, int row, int col, Direction dir, int len) {
                    // add implementation
                    return "test returned";
                }
                void erase(int page, int row, int col, Direction dir, int len) {
                    // add implementation
                }
                void show(int page) {
                    // add implementation
                }
    };
}

int main() {
    ariel::Notebook notebook;
    notebook.write(1, 1, 98, ariel::Direction::Horizontal, "test");
    return 0;
}