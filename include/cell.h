/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2026
 *
 * @file    cell.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Cell template specification.
 * @version 1.0.0
 * @date    05/19/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef CELL_H_
#define CELL_H_

/**
 * A namespace to encapsulate work developed for CSC232 - Data Structures.
 */
namespace csc232
{
    /**
     * @brief A template abstract base class that defines the interface for a cell that can...
     * @tparam object The type of object to be stored in the cell
     * @note This is an abstract base class and cannot be instantiated directly
     * 
     */
    template < typename object >
    class cell
    {
    public:
        // TODO: Task 1 - Step 2: Define the cell default destructor below.
        /***
         * @brief Default destructor.
         */
        virtual ~cell( ) = default;
        /* Public API */

        /**
         * @brief Pure virtual member funtion to read the vlue stored in the cell (accesssor)
         * @return The value stored in the cell.
         */

        // TODO: Task 1 - Step 3: Declare the read() pure virtual member function (accessor method)
        virtual auto read( ) const -> object = 0; //=0 makes it a pure virtual function

        /**
         * @brief Pure virtual member function to write a value into the cell (mutator method)
         * @param value The value to be written into the cell.
         */

        // TODO: Task 1 - Step 4: Declare the write() pure virtual member function (mutator method)
        virtual auto write ( const object & value ) -> void = 0;
    };
}

#endif // CELL_H_

//get rid of the TODO lines