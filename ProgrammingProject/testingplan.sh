echo -e "~~ Maze Criteria Tests"

# Test 1a - Tests for a maze with a height and width too large 
# Expected output: Error message that the dimensions of maze are invalid
echo -n "1a Tests for a maze with a height and width too large - "
./MazeSkeleton testing/whtoobig.txt > tmp
if grep -q "Error: Maze dimensions are invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1b - Tests for a maze with a height and width too small 
# Expected output: Error message that the dimensions of maze are invalid
echo -n "1b Tests for a maze with a height and width too small - "
./MazeSkeleton testing/whtoosmall.txt > tmp
if grep -q "Error: Maze dimensions are invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1c - Tests for a maze with a exit point at a place where it is impossible to win 
# Expected output: Error message that the maze is invalid
echo -n "1c Tests for a maze with a exit point at a place where it is impossible to win - "
./MazeSkeleton testing/exitwin.txt > tmp
if grep -q "Error: Maze is invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1d - Tests for a maze with a starting point at a place where it is impossible to win
# Expected output: Error message that the maze is invalid
echo -n "1d Tests for a maze with a starting point at a place where it is impossible to win - "
./MazeSkeleton testing/startwin.txt > tmp
if grep -q "Error: Maze is invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1e - Tests for a maze with invalid characters 
# Expected output: Error message that maze is invalid
echo -n "1e Tests for a maze with invalid characters - "
./MazeSkeleton testing/invalidchar.txt > tmp
if grep -q "Error: Maze is invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1f - Tests for a maze with a height and width within the accepted range
# Expected output: Maze successfully loaded
echo -n "1f Tests for a maze with a height and width within the accepted range - "
./MazeSkeleton testing/whvalid.txt > tmp
if grep -q "Maze successfully loaded" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1g - Tests for a maze with valid characters 
# Expected output: Maze successfully loaded
echo -n "1g Tests for a maze with valid characters - "
./MazeSkeleton testing/validchar.txt > tmp
if grep -q "Maze successfully loaded" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1h - Tests for a maze with a reachable exit point 
# Expected output: Maze successfully loaded
echo -n "1h Tests for a maze with a reachable exit point - "
./MazeSkeleton testing/validexit.txt > tmp
if grep -q "Maze successfully loaded" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1i - Tests for a maze with a starting point in a winnable position 
# Expected output: Maze successfully loaded
echo -n "1i Tests for a maze with a starting point in a winnable position - "
./MazeSkeleton testing/validstart.txt > tmp
if grep -q "Maze successfully loaded" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 1j - Tests for a maze with the player not starting at point S
# Expected output: Maze successfully loaded
echo -n "1j Tests for a maze with the player not starting at point S - "
./MazeSkeleton testing/invalidstartingpoint.txt > tmp
if grep -q "Error: Maze is invalid" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi





echo -e "~~ Loading File Tests"

# Test 2a - Tests for a valid filename
# Expected output: Maze successfully loaded
echo -n "2a Tests for a valid filename - "
./MazeSkeleton testing/MazeSkeleton.c > tmp
if grep -q "Maze successfully loaded" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 2b - Tests for an invalid filename
# Expected output: Error message that the file does not exist
echo -n "2b Tests for an invalid filename - "
./MazeSkeleton testing/invalidFile.c > tmp
if grep -q "Error: File does not exist" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

echo -e "~~ Movement Input Tests"

# Test 3a - Tests for valid movement inputs
# Expected output: Player moves successfully
echo -n "3a Tests for valid movement inputs - "
./MazeSkeleton testing/validmovement.txt > tmp
if grep -q "Player movement successful" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 3b - Tests for invalid movement inputs
# Expected output: Error message that the file does not exist
echo -n "3b Tests for invalid movement inputs - "
./MazeSkeleton testing/invalidmovement.txt > tmp
if grep -q "Error: Invalid Command" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 3c - Tests for valid movement through space
# Expected output: Successfull movement of player
echo -n "3c Tests for valid movement through space - "
./MazeSkeleton testing/movespace.txt > tmp
if grep -q "Player has moved successfully" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 3d - Tests for movement through walls
# Expected output: Error message that player cannot move 
echo -n "3d Tests for movement through walls - "
./MazeSkeleton testing/movewalls.txt > tmp
if grep -q "Error: Player cannot move there" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Test 3e - Tests for player winning the game
# Expected output: Message saying player has won
echo -n "3d Tests for player winning the game - "
./MazeSkeleton testing/wingame.txt > tmp
if grep -q "You have successfully escaped the Maze. Well done!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi
