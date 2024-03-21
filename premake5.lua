workspace "Battleship"
   configurations { "Debug", "Release" }

project "Battleship"
   kind "ConsoleApp"
   language "C++"
   targetdir "."
   targetname "battleship"
   cppdialect "C++20"
   toolset "clang"

   files { "**.hpp", "**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"
