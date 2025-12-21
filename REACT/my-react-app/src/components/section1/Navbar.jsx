import React from 'react'

const Navbar = () => {
  return (
    <div className='flex items-center justify-between p-4 bg-gray-100'>
      <h4 className='bg-black text-white px-12 py-2 rounded-full'>
        Target Audience
      </h4>
      <button className='bg-gray-200 rounded-full  px-8 py-2 hover:bg-gray-300'>
        Digital Banking Platform
      </button>
    </div>
  )
}

export default Navbar
