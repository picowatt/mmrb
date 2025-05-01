#pragma once

#include <boost/interprocess/mapped_region.hpp>
#include <boost/interprocess/file_mapping.hpp>
#include <span>
#include <cstddef>
#include <utility>
#include <cstring>

namespace mmrb {
	class MemoryMappedRingBuffer {
	protected:
		std::size_t capacity;
		std::size_t head;
		std::size_t tail;

	public:
		MemoryMappedRingBuffer(size_t capacity)
			: capacity(capacity)
			, head(0)
			, tail(0)
		{
		};

		virtual ~MemoryMappedRingBuffer() = default;

	protected:


		size_t read(std::span<std::byte> dest)
		{
			return 0;
		}

		size_t read(std::span<std::byte> dest, std::size_t count)
		{
			return 0;
		}

		size_t read(std::span<std::byte> dest, std::size_t pos, std::size_t count)
		{
			return 0;
		}

		size_t write(std::span<const std::byte> src)
		{
			return 0;
		}

		size_t write(std::span<const std::byte> src, std::size_t count)
		{
		}

		std::pair<std::span<const std::byte>, std::span<const std::byte>> peek(size_t count) const
		{
			return {};
		}

		bool empty() const
		{
			return head == tail;
		}

		void clear()
		{
			tail = head;
		}
	};
}