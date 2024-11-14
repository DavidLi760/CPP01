/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <davli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:32:38 by davli             #+#    #+#             */
/*   Updated: 2024/11/14 16:33:48 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void replacestr(std::string& str, const std::string& from, const std::string& to)
{
    size_t startPos = 0;
    while ((startPos = str.find(from, startPos)) != std::string::npos)
    {
        str = str.substr(0, startPos) + to + str.substr(startPos + from.length());
        startPos += to.length();
    }
}

void    replace_words(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Couldn't open file: " << filename << std::endl;
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Couldn't create file: " << filename << ".replace" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        replacestr(line, s1, s2);
        outputFile << line << '\n';
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "./Loser_Sed <filename> <str1> <str2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    replace_words(filename, s1, s2);
    return (0);
}