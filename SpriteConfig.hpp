#ifndef SpriteConfig_hpp
#define SpriteConfig_hpp
struct SpriteConfigData
{
    SpriteConfigData(size_t level,size_t frame_count,double frame_duration,
                     double left,double bottom, double width, double height,bool loop);
    size_t level;
    size_t frame_cout;
    double frame_duration;
    double left;
    double bottom;
    double width;
    double height;
    bool loop;
};
class SpriteConfig
{
    public:
    SpriteConfig();
    SpriteConfigData Get(const std::string& nazwa) const;
    bool CzyZawiera(const std::string& nazwa) const;
    private:
    std::map<const std::string,SpriteConfigData> m_dane;
    void Insert(const std::string& nazwa,const SpriteConfigData& dane);
};

#endif
