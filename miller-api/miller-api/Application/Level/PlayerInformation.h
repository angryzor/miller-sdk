#pragma once

namespace app::level {
    class PlayerInformation : public hh::fnd::BaseObject {
    public:
        struct Unk2 {
            hh::fnd::Handle<hh::fnd::Messenger> unk1;
            uint8_t unk2;
            uint32_t unk2a;
            hh::fnd::WorldPosition worldPos;
            uint64_t unk3;
            uint64_t unk4;
            float unk5;
            float unk6;
            float unk7;
            float unk8;
            uint32_t unk9;
            uint32_t unk10;
            uint32_t unk11;
            uint32_t unk12;
            uint32_t unk13;
            csl::math::Vector3 unk14;
            csl::math::Vector3 unk15;
            csl::math::Vector3 unk16;
            uint32_t unk17;

            Unk2();
        };

        struct Unk4 {
            uint32_t unk1;
            uint32_t unk2;
        };

        std::optional<hh::fnd::Handle<app::player::Player>> playerObject;
        std::optional<csl::math::Vector3> position;
        std::optional<csl::math::Quaternion> rotation;
        std::optional<float> dword80;
        std::optional<csl::math::Vector3> vector470;
        std::optional<csl::math::Vector3> vector490;
        std::optional<csl::math::Vector3> vector4B0;
        std::optional<csl::math::Vector3> vector4D0;
        std::optional<csl::math::Vector3> vector4F0;
        std::optional<csl::math::Vector3> vector4110;
        std::optional<csl::math::Vector3> vector4130;
        std::optional<csl::math::Vector3> vector4150;
        std::optional<csl::math::Vector3> vector4170;
        std::optional<csl::math::Vector3> vector4190;
        std::optional<csl::math::Vector3> vector41B0;
        std::optional<csl::math::Vector3> vector41D0;
        std::optional<csl::math::Vector3> vector41F0;
        std::optional<csl::math::Vector3> vector4210;
        std::optional<csl::math::Vector3> vector4230;
        std::optional<uint8_t> byte250;
        std::optional<csl::math::Vector2> vector2254;
        std::optional<csl::math::Vector2> vector2260;
        std::optional<uint32_t> boostGaugeCount;
        std::optional<uint8_t> byte274;
        std::optional<float> stamina;
        std::optional<float> dword280;
        std::optional<uint8_t> byte288;
        std::optional<uint8_t> byte28A;
        std::optional<uint32_t> dword28C;
        std::optional<uint32_t> dword294;
        std::optional<uint32_t> dword29C;
        std::optional<uint8_t> byte2A4;
        std::optional<uint8_t> byte2A6;
        std::optional<uint8_t> byte2A8;
        std::optional<uint8_t> byte2AA;
        std::optional<csl::math::Vector3> groundNormal;
        std::optional<float> altitude;
        std::optional<csl::math::Vector3> vector42E0;
        std::optional<uint32_t> dword300;
        std::optional<uint32_t> dword308;
        std::optional<uint8_t> byte310;
        std::optional<uint8_t> byte312;
        std::optional<uint8_t> byte314;
        std::optional<uint8_t> byte316;
        std::optional<uint8_t> byte318;
        std::optional<uint8_t> byte31A;
        std::optional<uint8_t> byte31C;
        std::optional<uint8_t> byte31E;
        std::optional<uint8_t> byte320;
        std::optional<uint8_t> byte322;
        std::optional<uint8_t> byte324;
        std::optional<uint8_t> byte326;
        std::optional<uint8_t> byte328;
        std::optional<uint8_t> byte32A;
        std::optional<uint8_t> byte32C;
        std::optional<uint8_t> byte32E;
        std::optional<uint8_t> byte330;
        std::optional<uint8_t> byte332;
        std::optional<uint8_t> byte334;
        std::optional<uint8_t> byte336;
        std::optional<uint8_t> byte338;
        std::optional<uint8_t> byte33A;
        std::optional<uint8_t> byte33C;
        std::optional<uint8_t> byte33E;
        std::optional<uint8_t> byte340;
        std::optional<uint8_t> byte342;
        std::optional<uint8_t> byte344;
        std::optional<uint8_t> byte346;
        std::optional<uint8_t> byte348;
        std::optional<uint8_t> byte34A;
        std::optional<uint8_t> byte34C;
        std::optional<uint8_t> byte34E;
        std::optional<uint8_t> byte350;
        std::optional<uint8_t> byte352;
        std::optional<uint8_t> byte354;
        std::optional<uint8_t> byte356;
        std::optional<uint8_t> byte358;
        std::optional<uint8_t> byte35A;
        std::optional<uint8_t> byte35C;
        std::optional<uint8_t> byte35E;
        std::optional<uint8_t> byte360;
        std::optional<uint8_t> byte362;
        std::optional<uint8_t> byte364;
        std::optional<uint8_t> byte366;
        std::optional<uint8_t> byte368;
        std::optional<uint8_t> byte36A;
        std::optional<uint8_t> byte36C;
        std::optional<uint8_t> byte36E;
        std::optional<uint8_t> byte370;
        std::optional<uint8_t> byte372;
        std::optional<uint8_t> byte374;
        std::optional<uint8_t> byte376;
        std::optional<uint8_t> byte378;
        std::optional<uint8_t> byte37A;
        std::optional<uint8_t> byte37C;
        std::optional<uint8_t> byte37E;
        std::optional<uint8_t> byte380;
        std::optional<uint32_t> dword384;
        std::optional<uint32_t> dword38C;
        std::optional<uint8_t> byte394;
        std::optional<uint8_t> byte396;
        std::optional<uint8_t> byte398;
        std::optional<Unk2> unk3A0;
        std::optional<uint8_t> byte460;
        std::optional<uint32_t> byte464;
        std::optional<csl::math::Vector3> vector3470;
        std::optional<uint8_t> byte490;
        std::optional<float> float494;
        std::optional<float> float49C;
        std::optional<float> float4A4;
        std::optional<float> float4AC;
        std::optional<float> float4B4;
        std::optional<csl::math::Transform> transform44C0;
        Unk4 qword510[8];

        PlayerInformation(csl::fnd::IAllocator* allocator);
    };
}