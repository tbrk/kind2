/*
    Copyright (c) 2007-2011 iMatix Corporation
    Copyright (c) 2007-2011 Other contributors as noted in the AUTHORS file

    This file is part of 0MQ.

    0MQ is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    0MQ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __PLATFORM_H_INCLUDED__
#define __PLATFORM_H_INCLUDED__

//  This is the platform definition for the MSVC platform.
//  As a first step of the build process it is copied to
//  zmq directory to take place of platform.hpp generated from
//  platform.hpp.in on platforms supported by GNU autotools.
//  Place any MSVC-specific definitions here.

#define CZMQ_HAVE_WINDOWS

#define HAVE_UUID 1

#endif
