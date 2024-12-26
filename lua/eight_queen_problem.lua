N = 8

-- check whether position (n,c) is free from attacks
function is_place_ok(a, n, c)
    for i = 1, n - 1 do   -- for each queen already placed
        if
            (a[i] == c)   -- same column?
            or (a[i] - i == c - n) -- same diagonal?
            or (a[i] + i == c + n)
        then              -- same dianonal?
            return false  -- place can be attacked
        end
    end
    return true -- no attacks; place is OK
end

-- print board
function print_solution(a)
    for i = 1, N do -- for each row
        for j = 1, N do -- for each column
            -- write "X" or "-" plus a space
            io.write(a[i] == j and "X" or "-", " ")
        end
        io.write("\n")
    end
    io.write("\n")
end

-- add to board 'a' all queens from 'n' to 'N'
function add_queen(a, n)
    if n > N then -- all queens have been placed?
        print_solution(a)
        os.exit(0) -- stop after the first solution is found
    else       -- try to place n-th queen
        for c = 1, N do
            if is_place_ok(a, n, c) then
                a[n] = c -- place n-th queen at column 'c'
                add_queen(a, n + 1)
            end
        end
    end
end

-- run the program
add_queen({}, 1)
