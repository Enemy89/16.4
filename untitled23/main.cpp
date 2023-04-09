#include <iostream>
#include <cmath>

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main() {
    std::string melody = "";
    std::string partMelody;

    while (melody.length() < 12) {
        std::cout << "Enter melody: " << std::endl;
        std::cin >> partMelody;
        if (melody.length() + partMelody.length() > 12) {
            std::cerr << "Error! The melody length cannot exceed 12 notes. Current number of notes: " << melody.length()
                      << std::endl;
        } else
            melody += partMelody;
    }

    for (int i = 0; i <12; ++i) {

        int notesInd = int(melody[i])-48;
        double tmp = pow(2,notesInd-1);
        int notes=int(tmp);

        if (notes & DO) {
            std::cout << "DO ";
        } else {
            if (notes & RE) {
                std::cout << "RE ";
            } else {
                if (notes & MI) {
                    std::cout << "MI ";
                } else {
                    if (notes & FA) {
                        std::cout << "FA ";
                    } else {
                        if (notes & SOL) {
                            std::cout << "SOL ";
                        } else {
                            if (notes & LA) {
                                std::cout << "LA ";
                            } else
                                std::cout << "SI ";
                        }
                    }
                }
            }
        }
    }
}
