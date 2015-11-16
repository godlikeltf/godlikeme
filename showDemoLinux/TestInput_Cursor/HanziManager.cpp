#include <iostream>
#include <fstream>
#include "HanziManager.h"
#include "ChineseTranslator.h"

HanziManage::HanziManage(const std::string &filename)
{
    readFile( filename );
}

HanziManage::~HanziManage()
{

}

int HanziManage::readFile(const std::string &name)
{
    std::ifstream in( name.c_str() );
    if(!in)
    {
        printf("Can not find %s \n", name.c_str());
        return -1;
    }

    std::string line;
    getline( in, line, '\n' );
    while(!in.eof())
    {
        std::string strLine( line );

        std::string::size_type index = 0;
        std::string::size_type pos = 0;
        if( ( index = strLine.find( ' ',  pos) ) !=  std::string::npos )
        {
            std::string key = strLine.substr( pos, index );
            std::string val = strLine.substr( index + 1 );
            m_mapData.insert( std::pair< std::string , std::string >( key, val ) );
        }
        getline( in, line, '\n' );
    }

    return 0;
}

const std::vector<QString> *HanziManage::currentHanziList() const
{
    return &m_vecHanzi;
}

void HanziManage::splitHanzi(const std::string &strHanzi, std::vector<QString> &vecHanzi)
{
    vecHanzi.clear();

    std::string::size_type index = 0;
    std::string::size_type pos = 0;
    while( (index = strHanzi.find( ' ', pos ) ) != std::string::npos )
    {
        std::string hanzi = strHanzi.substr( pos, index - pos );
		vecHanzi.push_back(QString::fromUtf8(hanzi.c_str()));
        pos = index + 1;
    }
}

const std::vector<QString> *HanziManage::setPinyin(const std::string &py) const
{
    std::map<std::string, std::string >::const_iterator iter = m_mapData.find( py );
    if( iter != m_mapData.end() )
	{
		m_curPinyin = py;
		const std::string &strHanzi = iter->second;

		splitHanzi(strHanzi, m_vecHanzi);
	}

    return &m_vecHanzi;
}


