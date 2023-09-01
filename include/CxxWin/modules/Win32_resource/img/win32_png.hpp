/***************************************************************************//**
 * @file win32_png.h
 * @author StoneyDSP (nathanjhood@googlemail.com)
 *
 * @brief Contains definitions of functions that provide access to
 * specifically-named resources, which necessitates external linkage.
 *
 * @version 1.0.0-init
 * @date 2023-08-24
 *
 * @copyright This file was generated by using Vector-of-Bool's excellent
 * 'CMakeRC' resource compiler script from CMake's template resources for
 * Windows. The results have been given minimal tweaks - mostly just text
 * formatting - to provide a similar interface to the rest of the project's
 * codebase. Please see 'cmrc.hpp' and Kitware.org for respective license
 * information.
 *
 ******************************************************************************/
#pragma once
/**
 * @brief Contains definitions of functions that provide access to
 * specifically-named resources, which necessitates external linkage.
 */
#define _WIN32_RESOURCE_IMG_PNG_H_

#include <map>
#include <utility>

#include "../cmrc.hpp"

namespace CMakeRC
{
/**
 * @namespace 'CMakeRC::Img'
 *
 * @brief The 'Img' namespace. Contains declarations and definitions
 * of binary-compiled '*.png' files for interacting with Win32 API.
 *
 */
namespace Img
{
namespace
{
const IDXRES& GetRootIndex();
} // namespace
FSEMBEDDED GetFileSystem();
} // namespace Img
} // namespace CMakeRC
