#pragma once
#include <vector>
#include <string>
#include <map>
#include <QString>

// ºº×Ö¹ÜÀí
class HanziManage
{
public:
    HanziManage(const std::string &filename);
    ~HanziManage();

    const std::vector<QString> *setPinyin(const std::string &py) const;
    const std::vector<QString> *currentHanziList() const;

private:
    int readFile(const std::string &filename);

protected:
    static void splitHanzi(const std::string &strHanzi, std::vector<QString> &vecHanzi);

protected:
    std::map< std::string, std::string >	m_mapData;

private:
    mutable std::string m_curPinyin;
    mutable std::vector<QString> m_vecHanzi;
};
