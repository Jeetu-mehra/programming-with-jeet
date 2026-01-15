import LeftContent from './leftcontent'
import RightContent from './RightContent'

const Page1content = () => {
  return (
    <div className='pb-16 pt-6  flex items-center gap-10 h-[90vh]  px-18'>
      <LeftContent/>
      <RightContent/>
    </div>
  )
}

export default Page1content
