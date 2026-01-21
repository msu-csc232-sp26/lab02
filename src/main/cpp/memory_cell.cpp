/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2026
 *
 * @file    memory_cell.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Memory Cell implementation template.
 * @version 1.0.0
 * @date    05/19/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "memory_cell.h" //double quotes is a reference

namespace csc232
{
    // we don't document implementations
    template < typename object >
    memory_cell< object >::memory_cell( ) : value_{ object{} } // constructors don't have a return type
    {
    }

    // TODO: Task 3 - Step 3: Implement the read() method
    template < typename object >
    auto memory_cell< object >::read( ) const -> object
    {
        return value_;
    }

    // TODO: Task 3 - Step 4: Implement the write() method
    template < typename object >
    auto memory_cell< object >::write( const object &value ) -> void
    {
        value_ = value;
    }

} // csc232
