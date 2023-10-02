/***************************************************************************
 *   Copyright (c) 2023 Ondsel, Inc.                                       *
 *                                                                         *
 *   This file is part of OndselSolver.                                    *
 *                                                                         *
 *   See LICENSE file for details about copyright.                         *
 ***************************************************************************/
 
/*********************************************************************
 * @file  MbDCode.cpp
 *
 * @brief Program to assemble a piston crank system.
 *********************************************************************/

#include <filesystem>
#include "lib/OndselSolver/include/CADSystem.h"
#include "lib/OndselSolver/include/ASMTAssembly.h"

using namespace MbD;

int main(int argc , char** argv) {

    std::filesystem::current_path("/home/johnd/Projects/solver-test/test_files");

    ASMTAssembly::runFile("piston.asmt");
    ASMTAssembly::runFile("00backhoe.asmt");
    ASMTAssembly::runFile("circular.asmt");
    ASMTAssembly::runFile("engine1.asmt");
    ASMTAssembly::runFile("fourbar.asmt");
    ASMTAssembly::runFile("fourbot.asmt");
    ASMTAssembly::runFile("wobpump.asmt");

    auto cadSystem = std::make_shared<CADSystem>();
    cadSystem->runOndselDoublePendulum();
    cadSystem->runOndselPiston();
    cadSystem->runPiston();

}
