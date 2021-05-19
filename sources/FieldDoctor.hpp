#pragma once
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{
    class FieldDoctor : public Player {
    public:
        FieldDoctor(Board& b, City c) : Player(b, c) {
            _role = "FildDoctor";
        }

        Player &treat(City c) override;
    };

}