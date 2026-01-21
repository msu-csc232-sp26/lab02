/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2026
 *
 * @file    memory_cell.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Memory Cell template specification.
 * @version 1.0.0
 * @date    05/19/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef MEMORY_CELL_H_
#define MEMORY_CELL_H_

#include "cell.h"

/**
 * A namespace to encapsulate work developed for CSC232 - Data Structures.
 */
namespace csc232
{
    /**
     * A general memory cell capable of storing a single object.
     * @tparam object the type of object stored in this memory cell.
     */
    template < typename object >
    class memory_cell : public cell< object >
    {
    public:
        // TODO: Task 2 - Step 2: Declare default constructor.
        /**
         * @brief Default constructor
         */
        memory_cell( );

        /**
         * @brief Default constructor
         */
        ~memory_cell( ) override = default;

        /**
         * @brief Override te read() method to return the stored value.
         * @return The value stored in the memory cell.
         */
        auto read( ) const -> object override;

        /**
         * @copydoc cell::write
         */
        auto write( const object &value ) -> void override;

    private:
        // TODO: Task 2 - Step 6: Declare data member
        object value_;
    };

} // csc232

#endif // MEMORY_CELL_H_
