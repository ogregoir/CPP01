/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:38:31 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 18:38:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

private :

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public :

    Harl( void );
    void complain( std::string level );
    ~Harl( void );

};
